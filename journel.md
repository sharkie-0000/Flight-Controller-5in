---
title: "Flight Controller"
author: "Sharky"
description: "A flight controller is the main control unit of a drone. It receives data from sensors such as the IMU, barometer, GPS, optical flow, and lidar, processes this information, and sends control signals to the motors/ESCs to maintain stability, altitude, orientation, and flight direction."
created_at: "2026-11-11"
---

# 2026-11-11: Final Documentation and script addition

**Total time spent: 4 hours**

This session focused on creating additional scripts and getting the project set up. I created a Bill of Materials (BOM), I updated the README.md file with details about the project, and information on what hardware was used. Then I got the KiCad schematic, PCB and other additional files sorted. I checked the folder structure and uploaded the necessary files to GitHub. Finally I committed and pushed all of my most recent changes to GitHub.

![Screenshot_2026-11-11_at_1.42.13_PM.png](https://cdn.hackclub.com/01a1c9aa-44ab-7f6c-8449-aa0dddec2a6c/Screenshot_2026-11-11_at_1.42.13_PM.png)

![image.png](https://cdn.hackclub.com/01a1c9aa-a47a-701a-92db-09f608ac467f/image.png)

![image.png](https://cdn.hackclub.com/01a1c9aa-d7c3-7371-ac03-010532a7c1a8/image.png)

![Screenshot_2026-11-11_at_1.44.14_PM.png](https://cdn.hackclub.com/01a1c9ac-1139-7511-a09c-04151894c587/Screenshot_2026-11-11_at_1.44.14_PM.png)

![Screenshot_2026-11-11_at_1.44.50_PM.png](https://cdn.hackclub.com/01a1c9ac-a5e7-71b5-a595-fde5bd47baf2/Screenshot_2026-11-11_at_1.44.50_PM.png)

# 2026-11-11: Error Resolution

**Total time spent: 8 hours**

After completing the four-layer PCB routing, I ran a full DRC in KiCad again. The initial check identified several issues, including:
- Track clearance violations.
- Unconnected nets such as MOTOR1 and I2C_SCL.
- Overlapping tracks on the back copper layer.
- Via size violations.
- Silkscreen text overlapping copper areas.


![Screenshot_2026-11-11_at_1.05.38_PM.png](https://cdn.hackclub.com/01a1c988-ccb8-7c7b-b64f-b2b6b6b3396b/Screenshot_2026-11-11_at_1.05.38_PM.png)

![image.png](https://cdn.hackclub.com/01a1c99a-98c8-77a1-bd66-1d1be429b481/image.png)


This took me to long to refactor all of them but i did.

Final Success:

![image.png](https://cdn.hackclub.com/01a1c99b-7d2a-702e-aa1a-fb37a1814a88/image.png)


# 2026-11-11: DRC Errors Resolution

**Total time spent: 5 hours**

I performed a full DRC on my PCB using KiCad. This helped me identify any errors and warnings relating to the track clearances, open nets, overlaps, via spacing and board border. I then fixed the routing issues by filling in any missing connections and moving components/tracks where needed. I also looked at my copper zones and ensured that my ground and power connections were well connected. Once I had made the required changes, I performed a number of DRCs to confirm that my changes worked and did not cause any new issues.

Finally, I checked through my DRC and confirmed that there were no more design rule violations.

![Screenshot_2026-11-11_at_12.45.55_PM.png](https://cdn.hackclub.com/01a1c976-a6ac-7e0a-b748-1b2503c34398/Screenshot_2026-11-11_at_12.45.55_PM.png)

![Screenshot_2026-11-11_at_12.46.12_PM.png](https://cdn.hackclub.com/01a1c976-e77c-7d52-8c3a-ba05fc49680e/Screenshot_2026-11-11_at_12.46.12_PM.png)

# 2026-11-11: B.Cu Layer

**Total time spent: 4 hours**

In this session I worked on the back copper layer. Making sure to route the rest of the signal lines that could not be routed on the front and inner layer. Using via’s to help connect tracks to different layers. Carefully making sure that there are no crossing tracks by routing them correctly. Once routing was complete connections were checked to make sure everything was properly connected. 

This took me time ass many connection issues were occuring.

![Screenshot_2026-11-11_at_12.39.35_PM.png](https://cdn.hackclub.com/01a1c970-e01c-709d-93da-6eb7889327f7/Screenshot_2026-11-11_at_12.39.35_PM.png)

![Screenshot_2026-11-11_at_12.39.49_PM.png](https://cdn.hackclub.com/01a1c971-132e-746e-a8fa-ad8956792b56/Screenshot_2026-11-11_at_12.39.49_PM.png)

![Screenshot_2026-11-11_at_12.40.04_PM.png](https://cdn.hackclub.com/01a1c971-5682-7a3e-8680-b207bfb1202b/Screenshot_2026-11-11_at_12.40.04_PM.png)

![Screenshot_2026-11-11_at_12.40.34_PM.png](https://cdn.hackclub.com/01a1c971-cd43-708f-bdcb-36f9f1856411/Screenshot_2026-11-11_at_12.40.34_PM.png)



# 2026-11-11: In2-Cu

**Total time spent: 4 hours**

This session focussed on moving onto the second inner copper layer (In2.Cu) and working on the power nets. This involved creating power nets to take the 5V and 3.3V to various parts of the board to power the MCU, sensors and other peripherals. I also worked on keeping the power nets organised and keeping the required spacing between tracks. As there are multiple power requirements on the board I wanted to make sure they were nice and neat.

![Screenshot_2026-11-11_at_12.36.41_PM.png](https://cdn.hackclub.com/01a1c96e-332a-7007-80e7-097e9871c44a/Screenshot_2026-11-11_at_12.36.41_PM.png)

![Screenshot_2026-11-11_at_12.37.03_PM.png](https://cdn.hackclub.com/01a1c96e-8bcb-7175-bd2a-4c44a19cdf7d/Screenshot_2026-11-11_at_12.37.03_PM.png)

# 2026-11-11: InCu-1 layer

**Total time spent: 4 hours**

I started to work on the inside layers of the PCB. I started with the inner copper layer (In1.Cu). I focussed on the ground plane so that everything has a common reference. I also made links between the ground points and copper areas. As the board contains sensitive components such as the IMU and MCU it is important that the ground connections are properly set up to reduce any noise. I checked to ensure there were no unwanted breaks in the ground connections.

![Screenshot_2026-11-11_at_12.34.26_PM.png](https://cdn.hackclub.com/01a1c96c-27f2-7dbf-b2ec-7f4afb98b737/Screenshot_2026-11-11_at_12.34.26_PM.png)

![Screenshot_2026-11-11_at_12.34.42_PM.png](https://cdn.hackclub.com/01a1c96c-64a2-76c8-9689-75b61e2f66f4/Screenshot_2026-11-11_at_12.34.42_PM.png)



# 2026-11-11: Front copper layer

**Total time spent: 3 hours**

I began with routing the main traces on the front copper layer (F.Cu). This involved connecting up the STM32 microcontroller to surrounding components and making sure that the sensors, capacitors, and important components were connected. Since the board was small I had to carefully plan my routing paths to make sure there would be no crossing connections and enough space for vias. This allowed me to get a basic layout of the front layer.


![Screenshot_2026-11-11_at_12.31.35_PM.png](https://cdn.hackclub.com/01a1c969-96a0-72da-a484-1f8c3b0e40ea/Screenshot_2026-11-11_at_12.31.35_PM.png)
![img](https://cdn.hackclub.com/01a1c969-37db-788d-9553-abc86e11e963/Screenshot_2026-11-11_at_12.31.08_PM.png)


![Screenshot_2026-11-11_at_12.32.07_PM.png](https://cdn.hackclub.com/01a1c96a-0ffc-7237-8337-43f542c47b44/Screenshot_2026-11-11_at_12.32.07_PM.png)


# 2026-11-11: PCB Setup

**Total time spent: 7 hours**

so after completing the schematic, i moved on to the PCB design stage in KiCad. I started arranging all the components on the board and worked on the overall PCB layout. Since this board is being designed for a small drone, keeping the PCB compact is important. I carefully placed the main components, sensors, connectors and power circuits while considering their positions and connections. I also completed the board boundary setup to define the overall size and shape of the PCB.

I made sure the component placement was organised and that enough space was available for routing and future adjustments. With the board outline and component arrangement completed, the basic PCB layout is now ready.

![Screenshot_2026-11-11_at_12.21.30_PM.png](https://cdn.hackclub.com/01a1c960-673e-74ad-bdf4-c6a26d5f7100/Screenshot_2026-11-11_at_12.21.30_PM.png) 

![Screenshot_2026-11-11_at_12.22.16_PM.png](https://cdn.hackclub.com/01a1c961-181f-7f3c-80be-3451b2f5d9cf/Screenshot_2026-11-11_at_12.22.16_PM.png)

# 2026-11-11: Final schematic polish 

**Total time spent: 3 hours**

so at this point i added the camera strobe, usb c, blackbox and others in the schematic and reviewed the whole schematic and fixed all the issues.

All the ERC checks are passing there are no left errors. Fixxed all connection issues..

![Screenshot_2026-11-11_at_12.10.29_PM.png](https://cdn.hackclub.com/01a1c956-3e07-7efe-ab5c-49119549dd62/Screenshot_2026-11-11_at_12.10.29_PM.png)

![Screenshot_2026-11-11_at_12.10.47_PM.png](https://cdn.hackclub.com/01a1c956-7b40-755b-8653-f514ec38d192/Screenshot_2026-11-11_at_12.10.47_PM.png)

![Screenshot_2026-11-11_at_12.13.54_PM.png](https://cdn.hackclub.com/01a1c959-891a-7b6d-99d1-45908f5863ac/Screenshot_2026-11-11_at_12.13.54_PM.png)

![Screenshot_2026-11-11_at_12.14.28_PM.png](https://cdn.hackclub.com/01a1c959-edcf-755f-a5cf-9a0407272a96/Screenshot_2026-11-11_at_12.14.28_PM.png)

# 2026-11-11: Sensor Stuff  (ESC, Lidar, Optical Flow, camera strobe)..

**Total time spent: 3.5 hours**

so i completed all the external connectors and peripheral circuits needed to connect the board to the drone. This includes the 4-in-1 ESC, wall distance sensor, optical flow sensor, GPS and companion computer (Raspberry Pi or Jetson). I also added a MOSFET-based strobe/shutter driver, buzzer circuit and USB-C port for firmware flashing and configuration.
finally i ran the ERC in KiCad and fixed all floating pin warnings.

![Screenshot_2026-11-11_at_12.02.11_PM.png](https://cdn.hackclub.com/01a1c94e-9eb4-7684-a5b8-4b1d71005dbd/Screenshot_2026-11-11_at_12.02.11_PM.png)

![Screenshot_2026-11-11_at_12.02.22_PM.png](https://cdn.hackclub.com/01a1c94e-c88f-78b8-8f8b-d44e7b3705ac/Screenshot_2026-11-11_at_12.02.22_PM.png)

![Screenshot_2026-11-11_at_12.05.29_PM.png](https://cdn.hackclub.com/01a1c951-a864-7fa9-b69f-813eba1a1a42/Screenshot_2026-11-11_at_12.05.29_PM.png)

![Screenshot_2026-11-11_at_12.05.41_PM.png](https://cdn.hackclub.com/01a1c951-dce6-7aa3-9166-bb63e2b5986c/Screenshot_2026-11-11_at_12.05.41_PM.png)

![Screenshot_2026-11-11_at_12.05.57_PM.png](https://cdn.hackclub.com/01a1c952-13e1-72ff-a94b-96ed01591e51/Screenshot_2026-11-11_at_12.05.57_PM.png)

![Screenshot_2026-11-11_at_12.06.10_PM.png](https://cdn.hackclub.com/01a1c952-41df-7d75-a2e8-4b57fe6ccbb1/Screenshot_2026-11-11_at_12.06.10_PM.png)



# 2026-11-11: MCU Core

**Total time spent: 4 hours**

so i connected the STM32H743VIT6 microcontroller in KiCad and added the required capacitors, 25MHz crystal and reset circuit for stable operation. I also make sure that all power and ground connections were properly wired. Than i connected the onboard sensors: the ICM-42688-P IMU through SPI1, the DPS310 barometer through I2C1, and the W25Q128 Blackbox flash memory through SPI2. This allows the MCU to collect sensor data and store flight logs.

![Screenshot_2026-11-11_at_11.53.25_AM.png](https://cdn.hackclub.com/01a1c946-a6ba-7296-8a57-1bc605f3e118/Screenshot_2026-11-11_at_11.53.25_AM.png)

![image.png](https://cdn.hackclub.com/01a1c947-11b8-7278-ba29-09a38034b9d1/image.png)

![Screenshot_2026-11-11_at_11.54.43_AM.png](https://cdn.hackclub.com/01a1c947-db18-70ea-aaf5-7fbabe293e99/Screenshot_2026-11-11_at_11.54.43_AM.png)

![Screenshot_2026-11-11_at_11.55.15_AM.png](https://cdn.hackclub.com/01a1c948-4939-77a5-b9f5-a8a122715a4f/Screenshot_2026-11-11_at_11.55.15_AM.png)

![Screenshot_2026-11-11_at_11.55.35_AM.png](https://cdn.hackclub.com/01a1c948-9839-756f-8206-133843d849e2/Screenshot_2026-11-11_at_11.55.35_AM.png)

# 2026-11-11: Power Supply

**Total time spent: 4 hours**

In this section I focused on the power section in KiCad. Drone flight controllers are exposed to voltage spikes from the ESC and motors. As such, it was important to have a solid power section.

Power Section
Input and TVS Protection:
The board supports 3S to 6S LiPo batteries. An SMBJ28A TVS diode is connected directly to the battery input to protect the board from sudden voltage spikes. A 470µF capacitor is also added to handle voltage surges caused by motor braking.

5V Buck Regulator:
The TPS54302 buck regulator converts the battery voltage into a stable 5V supply. It can provide up to 3A, which is enough to power the companion computer, receiver, buzzer and 5V sensors. A 4.7µH inductor and ceramic capacitors are used to keep the output stable.

3.3V Low-Noise Regulator:
Switching regulators can create electrical noise that may affect sensitive components like the gyro. To avoid this, the MIC5219-3.3 regulator is used to provide a clean 3.3V supply from the 5V rail. This powers the MCU and gyro.

Battery Voltage Sensing:
The battery voltage is monitored using two resistors (10kΩ and 1kΩ) with 0.1% tolerance. They reduce the battery voltage to a safe level for the MCU to read through VBAT_SENSE. A 100nF capacitor is also added as a low-pass filter to reduce electrical noise from the 4-in-1 ESC.

![Screenshot_2026-11-11_at_11.42.58_AM.png](https://cdn.hackclub.com/01a1c93d-1d86-762f-a74b-5555526be255/Screenshot_2026-11-11_at_11.42.58_AM.png)

![Screenshot_2026-11-11_at_11.43.18_AM.png](https://cdn.hackclub.com/01a1c93d-5936-7d58-8f37-1791f2af73bf/Screenshot_2026-11-11_at_11.43.18_AM.png)

![Screenshot_2026-11-11_at_11.43.39_AM.png](https://cdn.hackclub.com/01a1c93d-aff7-7beb-b4da-920ba9636ef9/Screenshot_2026-11-11_at_11.43.39_AM.png)

![Screenshot_2026-11-11_at_11.44.27_AM.png](https://cdn.hackclub.com/01a1c93e-67ee-757b-8466-46542b63eb2d/Screenshot_2026-11-11_at_11.44.27_AM.png)

# 2026-11-11: Starting with some research..

**Total time spent: 3 hours**

I began working on the design for my custom 5" autonomous inspection drone. This will be used to inspect walls, bridges and indoors without relying fully on GPS. First I researched microcontrollers and decided on the STM32H743VIT6 which offers a clock speed of 480MHz along with 2MB Flash and 1MB SRAM. I studied the datasheet and hardware requirements of the microcontroller to understand how it will be powered and its regulator. I also studied the VCAPs needed along with power domains. I then decided on using an ICM-42688-P IMU for motion detection using SPI1. I went with a DPS310 barometer for altitude and added a front facing ToF sensor to monitor distance from walls. I also plan to use an optical flow sensor facing down to allow stable hovering indoors. Lastly I decided on a W25Q128 SPI Flash for storing Blackbox data and plan to have individual UART lines for external peripherals and MAVLink.

![image.png](https://cdn.hackclub.com/01a1c933-fa1a-7e2c-a3cb-cc4a7299e1e2/image.png)

found useful links:

- https://www.gigadevice.com/technical-resource/mcu-resource-center
- datasheet:  https://www.gd32mcu.com/data/documents/datasheet/GD32F450xx_Datasheet_Rev2.9.pdf
- http://gigadevice.com.cn/product/mcu/mcus-product-selector/gd32f450zgt6

![image.png](https://cdn.hackclub.com/01a1c935-5b8b-7b21-ad75-ae4225ac26bf/image.png)
