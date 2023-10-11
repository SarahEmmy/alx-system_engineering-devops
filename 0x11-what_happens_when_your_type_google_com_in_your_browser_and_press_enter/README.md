# 0x11-what_happens_when_you_type_google.com_in_your_browser_and_press_enter

Have you ever wondered what happens behind the scenes when you type "google.com" into your web browser and hit that "Enter" key? This repository explores the intricate journey that your request takes as it traverses the vast landscape of the internet. We delve into the layers of technologies and systems that work harmoniously to deliver web pages to your screen. Let's break it down.

## Table of Contents

1. [Introduction](#introduction)
2. [The Journey Begins](#the-journey-begins)
3. [DNS Resolution](#dns-resolution)
4. [Requesting the Web Page](#requesting-the-web-page)
5. [Web Server Processing](#web-server-processing)
6. [Response and Rendering](#response-and-rendering)
7. [Contributing](#contributing)
8. [License](#license)

## Introduction

When you enter a URL like "google.com" in your browser and press "Enter," you trigger a complex sequence of events that ultimately displays the Google homepage on your screen. This repository aims to shed light on this process, explaining how a simple user action initiates a cascade of intricate steps, from DNS resolution to rendering the web page.

## The Journey Begins

1. **User Input**: You type "google.com" into your browser's address bar and press "Enter."

2. **Browser Parses the URL**: The browser parses the URL to extract the domain name, in this case, "google.com."

## DNS Resolution

3. **DNS Lookup**: The browser needs to find the IP address associated with "google.com." It sends a DNS (Domain Name System) query to your local DNS resolver, which might be your ISP's DNS server.

4. **DNS Resolution Cascade**: If the local DNS resolver doesn't have the IP address cached, it queries authoritative DNS servers. This process may involve multiple DNS servers, each responsible for a portion of the internet's domain name space.

5. **IP Address Returned**: Once the correct IP address for "google.com" is found, it is returned to your browser.

## Requesting the Web Page

6. **Making the HTTP Request**: With the IP address known, your browser makes an HTTP request to the Google web server, including the domain name "google.com" in the request headers.

## Web Server Processing

7. **Web Server Handling**: Google's web server processes the request, fetching the appropriate web page or resources. This step can involve a multitude of operations, including database queries, security checks, and content generation.

8. **Response Generation**: The web server generates an HTTP response, which typically includes HTML, CSS, JavaScript, and more.

## Response and Rendering

9. **Receiving the Response**: Your browser receives the HTTP response from the web server.

10. **Rendering**: The browser begins rendering the web page. It parses the HTML, applies CSS styles, and executes JavaScript to create the visual representation of the page.

11. **Rendering Completion**: Once the rendering is complete, you see the Google homepage displayed on your screen.

## Contributing

If you're interested in contributing to this repository, you are welcome to add more details or expand upon any part of the process. Contributions could include detailed explanations, code examples, diagrams, or any other relevant information that helps demystify what happens when you type a URL into your browser.

## License

This repository is open-source and available under the [MIT License](LICENSE). Feel free to use, modify, and distribute the content according to the terms of the license.

As you explore this repository, you'll gain a deeper understanding of the magic that happens behind your web browser. Enjoy the journey through the world of web requests and responses!
