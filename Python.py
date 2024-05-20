import speech_recognition as sr
import pyttsx3
import os
import datetime
import wikipedia
import requests
from decouple import config

# Initialize speech engine
engine = pyttsx3.init('sapi5')
engine.setProperty('rate', 190)
engine.setProperty('volume', 1.0)
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)

def speak(text):
    engine.say(text)
    engine.runAndWait()

def take_user_input():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print('Listening....')
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print('Recognizing...')
        query = r.recognize_google(audio, language="en-in")
        return query
    except Exception as e:
        print(e)
        return None

def send_email(receiver_address, subject, message):
    try:
        email = EmailMessage()
        email['To'] = receiver_address
        email['From'] = config('EMAIL')
        email.set_content(message)
        s = smtplib.SMTP("smtp.gmail.com", 587)
        s.starttls()
        s.login(config('EMAIL'), config('PASSWORD'))
        s.send_message(email)
        s.close()
        return True
    except Exception as e:
        print(e)
        return False

def get_latest_news():
    news_headlines = []
    response = requests.get(f'http://newsapi.org/v2/top-headlines?country=in&apiKey={config("NEWS_API_KEY")}').json()
    for article in response['articles']:
        news_headlines.append(article['title'])
    return news_headlines

def search_on_wikipedia(query):
    results = wikipedia.summary(query, sentences=2)
    return results

def play_on_youtube(video):
    kit.playonyt(video)

def get_random_joke():
    headers = {'Accept': 'application/json'}
    res = requests.get("https://icanhazdadjoke.com/", headers=headers).json()
    return res["joke"]

def get_random_advice():
    response = requests.get("https://api.adviceslip.com/advice").json()
    return response['slip']['advice']

def main():
    speak(f"Hello Daksh")
    while True:
        query = take_user_input()
        if query is not None:
            # Process the query and execute the corresponding action
            if 'end email' in query:
                send_email('recipient@example.com', 'Subject', 'Message')
            elif 'get latest news' in query:
                news_headlines = get_latest_news()
                speak('Here are the latest news headlines:')
                for headline in news_headlines:
                    speak(headline)
            elif 'earch on wikipedia' in query:
                results = search_on_wikipedia(query)
                speak(results)
            elif 'play on youtube' in query:
                play_on_youtube(query)
            elif 'get random joke' in query:
                joke = get_random_joke()
                speak(joke)
            elif 'get random advice' in query:
                advice = get_random_advice()
                speak(advice)
            else:
                speak('I did not understand that command. Please try again.')

if _name_ == '_main_':
    main()