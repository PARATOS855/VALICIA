#!/bin/bash
while true; do
    echo "Starting Python script..."
    python3 venom.py
    echo "Script crashed! Restarting in 5 seconds..."
    sleep 5
done