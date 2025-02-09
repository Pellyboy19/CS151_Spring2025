#!/bin/bash

COMMIT_MESSAGE="$1"

if [ -z "$COMMIT_MESSAGE" ]; then
    COMMIT_MESSAGE="Repository Update"
fi

git pull
git add .
git commit -m "$COMMIT_MESSAGE"
git push

# ./gpush.sh
# ./gpush.sh "Added new files"
