# Smart-Doorbell-Project
    Smart Doorbell with Vibration Detection 
    
    A DIY smart doorbell system that detects door knocks through vibration sensors and sends instant notifications to your phone.


    Features 

    -Vibration detection for door knocks
    -Real-time phone notifications via Blynk
    -Audible alerts through buzzer
    -"Away Mode" to disable notifications
    -Battery-powered and rechargeable
    -Easy installation with adhesive mounting

    Components 

    1.ESP32 Development Board (ESP WROOM-32)
    2.18650 Powerbank Module with 5V/3V output
    3.Vibration sensor with adjustable sensitivity
    4.Active buzzer
    5.830-point breadboard
    6.Dupont wires (20cm Female-Female and Male-Female)
    7.USB Type-C cable for charging

    How It Works ?

    Knock Detection: When someone knocks on the door, the vibration sensor detects it and sends a HIGH signal to the ESP32
    Alert System: The ESP32 activates the buzzer and sends a notification through the Blynk app
    Notifications: Users receive a phone notification, email, and SMS alert saying "Someone knocked on the door!"
    Away Mode: Toggle this feature to prevent notifications when you don't want to be disturbed

    Installation 

    1.Mount the device on the interior side of your door using the double-sided tape
    2.Connect the device to power using the 18650 batteries
    3.Connect to your WiFi network (currently hardcoded in the source code)
    4.Set up the Blynk app with the provided event configuration
    5.Test the system to ensure proper functionality

    Technical Details
    Contact me for explaining how to wire every component and how to set up the project 

    Power Management

    The device runs on 3.3V provided by the 18650 Powerbank Module
    Rechargeable batteries via USB Type-C
    On/off button for power control

    Connectivity

    WiFi-enabled ESP32 connects to your home network
    Integration with Blynk IoT platform for notifications

    Sensors

    Vibration sensor with potentiometer for sensitivity adjustment
    Active buzzer for audible alerts

    Future Improvements 

    I will develop a custom mobile application with user-friendly WiFi configuration
    Reduce device size for more aesthetic design
    Implement more advanced vibration sensors
    Create better visual design and enclosure

    Known Limitations 

    WiFi credentials must be hardcoded in source code
    Large device footprint

    Economic Considerations 

    Cost-effective components
    Rechargeable batteries reduce ongoing costs


    Author 
    Ugran Radu-Andrei
