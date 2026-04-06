# 🚗 Vehicle Mileage Tracker

A lightweight and efficient professional tool designed to track and log your vehicle's daily mileage. Whether for personal use, business expenses, or maintenance scheduling, this tracker provides a clean and organized way to monitor your vehicle's activity.

---

## ✨ Features

* **Daily Logs** — Easily record the distance traveled every day.
* **Multilingual Support** — Fully localized in 5 major languages.
* **Vehicle Insights** — Keep a clear history of your vehicle's usage.
* **Clean Interface** — Optimized for quick data entry and readability.
* **Cross-Platform** — Designed to run smoothly in any terminal environment.

---

## 🌍 Supported Languages

The software automatically adapts to your needs with full support for:

| Language | Code | Status |
| :--- | :---: | :--- |
| 🇮🇹 **Italiano** | `IT` | Available |
| 🇬🇧 **English** | `EN` | Available |
| 🇫🇷 **Français** | `FR` | Available |
| 🇪🇸 **Español** | `ES` | Available |
| 🇩🇪 **Deutsch** | `DE` | Available |

---

## 🚀 Getting Started

### Prerequisites
* **C++ Version:** A compiler supporting **C++11** or later (`g++`, `clang++`, or `MSVC`).
* **Python Version:** **Python 3.6** or higher.

---

### 🛠️ Installation & Run (C++)

1.  **Prepare the file:** Save the source code as `main.cpp`.
2.  **Compile:**
    * **Linux / macOS / Windows (MinGW):**
        ```bash
        g++ -std=c++17 -o MileageTracker main.cpp
        ```
    * **Windows (MSVC):**
        ```cmd
        cl /EHsc main.cpp /Fe:MileageTracker.exe
        ```
3.  **Launch:**
    * **Linux / macOS:**
        ```bash
        ./MileageTracker
        ```
    * **Windows:**
        ```cmd
        MileageTracker.exe
        ```

---

### 🐍 Installation & Run (Python)

1.  **Prepare the file:** Save the script as `tracker.py`.
2.  **Run directly:**
    * **Universal:**
        ```bash
        python tracker.py
        ```
    * **Linux/macOS (if python3 is default):**
        ```bash
        python3 tracker.py
        ```

---

## ⌨️ Usage Guide

1.  **Select Language** — Choose your preferred language upon startup.
2.  **Enter Data** — Input the current odometer reading or the kilometers traveled.
3.  **Save & View** — The software calculates totals, daily increments, and record peaks.
4.  **Data Persistence** — The Python version automatically handles local storage via JSON.

---

## ⚠️ Pro Tips

* **Consistency** — Log your kilometers at the end of each day for the most accurate tracking.
* **Maintenance** — Use the total mileage data to predict your next service (oil change, tires).
* **Data Safety** — Always keep a backup of your `vehicle_logs.json` (Python version) for long-term history.

---

# Example
<img width="744" height="615" alt="image" src="https://github.com/user-attachments/assets/2aba8633-6e72-4ebf-8bd1-217e8197bd8f" />

