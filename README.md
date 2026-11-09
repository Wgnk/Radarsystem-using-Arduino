# 📡 Arduino-Based RADAR System with Target Tracking & Simulated Missile Launcher.

An Arduino-based RADAR detection and object-tracking system designed to detect nearby objects, measure their distance, and determine their angular position using an ultrasonic sensor mounted on a servo motor.
The system provides real-time graphical RADAR visualization through Processing IDE, displaying detected objects according to their angle and distance. It also features LCD-based target information, dual OLED displays, environmental monitoring, and an additional servo-controlled missile launcher simulation.
Developed as an electronics and embedded systems project, this system demonstrates the practical integration of sensors, microcontrollers, graphical interfaces, and servo-based automation.

# 🚀 Project Overview:- 

The RADAR system uses an ultrasonic sensor mounted on a servo motor to scan its surroundings across an approximately 180-degree field of view.
As the servo rotates, the ultrasonic sensor continuously measures the distance of objects within its detection range. The Arduino processes the sensor readings and communicates the detected object's angle and distance to Processing IDE.
Processing IDE converts this information into a graphical RADAR interface, allowing users to visualize detected objects in real time.
In addition to graphical visualization, the system incorporates LCD and OLED displays, LEDs, a buzzer, and a DHT11 sensor for environmental monitoring.
An additional feature was implemented to demonstrate a simulated targeting mechanism using a potentiometer, pushbutton, and second servo motor.

# ✨ Key Features :-

1. 180° RADAR Scanning:
Servo-mounted ultrasonic sensor scans the surrounding area.
2.Object Detection:
Detects objects within the configured ultrasonic detection range.
3. Real-Time Distance Measurement
Measures the distance between the sensor and detected objects.
4. Angular Position Detection:
Determines the approximate angular position of detected objects.
5. Graphical RADAR Interface :
Displays detected objects through a graphical interface developed using Processing IDE.
6. LCD Display :
Displays detected object's angle and distance when Processing visualization is not being used.
9. Dual OLED Displays :
Provides additional visual information and environmental monitoring.
10. Temperature Monitoring :
Measures ambient temperature using DHT11.
11. Humidity Monitoring : 
Measures relative humidity using DHT11.
12. LED Indicators :
Provides visual indications based on the system's detection logic.
13. Buzzer Alert :
Provides an audible indication when an object is detected according to the programmed conditions.
14. Simulated Targeting Mechanism : Uses a potentiometer, pushbutton, and second servo motor to demonstrate target-position selection and positioning.

# 🛠️ Hardware Components :-

-> Arduino Uno :
Microcontroller boards for system control and interfacing.
-> Ultrasonic Sensor :
Measures the distance of detected objects.
->Servo Motor :
Rotates the ultrasonic sensor for RADAR scanning.
-> LCD Display (16×2) :
Displays object distance and angular position.
-> OLED Display :
Displays additional system information and environmental readings.
-> DHT11 Sensor :
Measures temperature and humidity.
-> Indicators and alert :
(a) Green LED
Visual status indication.
(b) Red LED
Detection or alert indication.
(c) Buzzer
Provides audible alerts.
-> Breadboard :
Circuit prototyping and component connections.
-> Male-to-Male Jumper Wires :
Electrical connections.
-> Male Pin Headers :
Component interfacing.
-> USB Cable :
Programming and power connection.
->  Cardboard :
As required
Structural support and prototype construction.

->>Additional Components – Simulated Targeting Mechanism
Component
Quantity
Purpose
-> Potentiometer :
Selects the desired target angle.
-> Pushbutton :
Activates the simulated targeting sequence.
-> Additional Servo Motor :
Positions the cardboard launcher model at the selected angle.

# 💻 Software and Technologies :-

1. Arduino IDE :
Writing, compiling, and uploading Arduino firmware
2. Processing IDE :
Creating the graphical RADAR interface and visualizing detected objects.
3. Embedded C/C++ :
Programming sensor integration and control logic.
4. Serial Communication :
Transmitting angle and distance readings between Arduino and Processing.
5. Arduino Libraries :
Interfacing with ultrasonic sensors, servo motors, LCD, OLED, and DHT11.

# ⚙️ Working Principle :-

The system operates through continuous scanning, distance measurement, data processing, and graphical visualization.
1. RADAR Scanning -
An ultrasonic sensor is mounted on a servo motor that rotates across an approximately 180-degree scanning range.
The servo changes the sensor's direction at predefined angular intervals, allowing the system to scan its surroundings.
2. Object Detection -
At each scanning position, the ultrasonic sensor transmits ultrasonic waves and measures the time taken for the reflected waves to return.

The Arduino calculates the distance using:
Distance Formula:
Distance = (Time * speed of sound)/2 
The division by two accounts for the ultrasonic wave's journey to the object and back.
3. Angle and Distance Calculation
- The Arduino associates each distance measurement with the corresponding servo angle.
This provides two important parameters:
->>Angle: Approximate angular position of the detected object.
->>Distance: Distance between the ultrasonic sensor and the detected object.
4. Processing IDE – Graphical RADAR Visualization
The Arduino transmits the measured angle and distance through serial communication to Processing IDE.
Processing IDE interprets the incoming data and generates a graphical RADAR interface.
The interface provides:
RADAR-style scanning visualization.
Detected object representation.
Angular position of the detected object.
Distance information.
Real-time visual feedback.
This allows users to observe the surrounding detection area through a computer screen.
5. LCD and OLED Display -
The system incorporates multiple display units for presenting information.
16×2 LCD:
Displays the detected object's angle.
Displays the measured distance.
Provides an alternative information interface when Processing visualization is not being used.
OLED Display 1:
Displays additional system information.
OLED Display 2:
Displays temperature and humidity readings obtained from the DHT11 sensor.
6. Temperature and Humidity -Monitoring
The DHT11 sensor measures environmental temperature and relative humidity.
The Arduino processes the readings and updates the corresponding OLED display.
This introduces an environmental monitoring capability alongside the RADAR detection functionality.
7. LED and Buzzer Alert System -
LED indicators and a buzzer provide visual and audible feedback based on the programmed object-detection conditions.
This helps users identify detection events without continuously observing the graphical interface.

## 🎯 Additional Feature: Simulated Missile Launcher Mechanism :-

To extend the functionality of the existing RADAR project, we implemented an additional servo-controlled targeting simulation.
This feature demonstrates how angular position selection and servo-based positioning can be integrated into an existing RADAR system.
Components Used:
1. Potentiometer
2. Pushbutton
3. Second servo motor

#Working Principle~~

1. The potentiometer is used to select a desired angular position.
2. The selected position is represented by the potentiometer input.
3. When the pushbutton is activated, the system initiates the simulated positioning sequence.
4. The second servo motor rotates the cardboard launcher model toward the selected angular position.
5. This demonstrates coordinated control between user input and servo positioning.
# Important: This is an educational, non-functional launcher simulation. It uses a cardboard model and servo motor to demonstrate angular positioning. It does not launch projectiles.

# 🧩 System Architecture :-

The overall system can be represented as follows:
                 ARDUINO RADAR SYSTEM
                         |
                  ARDUINO UNO
                         |
          +--------------+--------------+
          |              |              |
          |              |              |
      Ultrasonic      DHT11         Servo Motor 1
       Sensor        Sensor              |
          |              |              |
          |              |         RADAR Scanning
          |              |
          |          Temperature
          |          & Humidity
          |
     Object Detection
          |
     Angle + Distance
          |
          +----------------------+
          |                      |
     Processing IDE          LCD Display
          |                      |
     RADAR GUI              Angle & Range
          |
    Object Visualization


       DISPLAY & ALERT SYSTEM
                 |
          +------+------+
          |      |      |
         OLED   LED   Buzzer
          |
    Environmental Data


     SIMULATED TARGETING SYSTEM
                 |
           Potentiometer
                 |
             Pushbutton
                 |
          Arduino Control
                 |
           Servo Motor 2
                 |
       Cardboard Model
# Note: The diagram represents the functional architecture. The actual distribution of components between the two Arduino Uno boards depends on the implemented wiring and firmware.

# 🔬 Applications :-

The concepts demonstrated by this project have potential applications in:
->> Indoor Navigation: Understanding the surrounding environment through distance and angular measurements.
Obstacle Detection: Identifying nearby obstacles in controlled environments.
->>Robotics: Integrating distance measurement and angular positioning into robotic systems.
->>Object Mapping: Demonstrating basic two-dimensional scanning and object-position visualization.
->>Educational RADAR Systems: Understanding ultrasonic sensing, servo control, and graphical visualization.
->>Automation Systems: Exploring sensor-based detection and automated positioning.
->>Environmental Monitoring: Monitoring temperature and humidity alongside object detection.

# ⚡ Challenges Faced During Development :-

During the development process, we encountered several hardware and software integration challenges.
1. Servo Motor Synchronization
Synchronizing servo rotation with ultrasonic distance measurements was important for obtaining meaningful angle-distance readings.
2. Accurate Distance Measurement
Ultrasonic readings sometimes fluctuated due to environmental conditions and object surfaces. Proper sensor timing and reading management were important.
3. Arduino–Processing Communication
Establishing reliable serial communication between Arduino and Processing IDE was necessary for real-time graphical visualization.
4. Multiple Display Integration
Integrating LCD and OLED displays while maintaining proper information updates required careful management of display communication.
5. Additional Servo Integration
Implementing the simulated targeting mechanism introduced another layer of servo control and user-input processing.
6. Hardware Integration
Managing multiple electronic components, power connections, and signal interfaces required careful circuit planning.

# 🔮 Future Scope :- 

The existing RADAR system can be improved with additional technologies and advanced functionalities.

->> Camera Integration :
Visual monitoring of the scanned environment.
->> AI-Based Object Recognition :
Classification of detected objects using computer vision.
->> Advanced Mapping :
Improved spatial representation of detected objects.
->> Data Logging :
Recording object detection and environmental measurements.
->> Improved Detection Algorithms: More stable and reliable distance measurements.
->> 360° Scanning :
Expanded environmental coverage using suitable mechanical arrangements.
Working model picture: - 

<img width="600" height="800" alt="image" src="https://github.com/user-attachments/assets/19c9f829-36d1-46b8-a76d-58529e7917db" />
Radar GUI on laptop: -

<img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/24ec0be7-0946-4e10-9201-3143d0405522" />

