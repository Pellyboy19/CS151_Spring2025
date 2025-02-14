#!/bin/bash

UPSTREAM_URL="https://github.com/Jonathan-Skeete/CS151_Spring2025.git"

if ! git remote get-url upstream &>/dev/null; then
    echo "Adding upstream..."
    git remote add upstream "$UPSTREAM_URL"
fi

git fetch upstream
git merge upstream/main -m "Merging upstream changes"

# ./gfetch.sh