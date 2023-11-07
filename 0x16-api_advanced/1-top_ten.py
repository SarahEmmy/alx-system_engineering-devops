#!/usr/bin/python3
"""
Function that retrieves the titles of the first 10 hot posts
for a specific subreddit by querying the Reddit API.
"""

import requests


def top_ten(subreddit):
    """
    Function that queries the Reddit API for a given
    subreddit. If the subreddit is not valid
    it prints None.
    """
    req = requests.get(
        "https://www.reddit.com/r/{}/hot.json".format(subreddit),
        headers={"User-Agent": "Custom"},
        params={"limit": 10},
    )

    if req.status_code == 200:
        for get_data in req.json().get("data").get("children"):
            dat = get_data.get("data")
            title = dat.get("title")
            print(title)
    else:
        print(None)
