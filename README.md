# Real-Time Digital Substation Relay Protection with ABB SSC600

**Closed-loop protection and automation testbench using ABB SSC600 IED, Typhoon HIL real-time simulation, and IEC 61850 GOOSE/SV communication.**

---

## Overview

This project demonstrates **real-time substation automation and relay protection** using the **ABB Ability™ Smart Substation Control and Protection (SSC600)** Intelligent Electronic Device (IED).  

It integrates the SSC600 with a **Typhoon HIL604 digital real-time simulator**, enabling closed-loop testing of **protection schemes**, **GOOSE messaging**, and **sampled values (SV)** in compliance with **IEC 61850**.  

The repository contains configuration files, logic diagrams, simulation models, and documentation for **trip/alarm logic validation** across a **10-bay digital substation model**.

---

## Key Features

- **GOOSE Messaging**
  - Configured 20+ datasets/control blocks for trips, interlocks, and alarms.
  - <10 ms end-to-end latency validated in Typhoon HIL.

- **Substation Model**
  - 110/20 kV, 10-bay Typhoon HIL system (8 feeders, transformer, bus coupler).
  - Closed-loop current/voltage injection into SSC600.

- **SCADA & Monitoring**
  - HIL-based SCADA panel for real-time feeder currents, voltages, and breaker operations.
  - PCM600 + WHMI single-line visualization.

- **Protection Functions Implemented**
  - Overcurrent (50/51), Earth Fault (50N/51N), Breaker Failure (50BF).
  - Trip/Alarm supervision, selective coordination.
  - Disturbance & fault record extraction.

- **Testing**
  - Simulated LG, LL, and 3-phase faults.
  - Verified 100% SSC600 trip response with 30–40 ms fault clearing.

---

    Typhoon HIL604 (Digital Grid Model)
    ┌─────────────────────────────────┐
    │ 110/20 kV Substation            │
    │ - 8 Feeders                     │
    │ - Transformer                   │
    │ - Bus Coupler                   │
    └─────────────────────────────────┘
              │  IEC 61850 GOOSE / SV
              ▼
     ABB SSC600 IED (Station Protection)
    ┌─────────────────────────────────┐
    │ Protection Logic (OC, EF, BF)   │
    │ GOOSE Datasets & Control Blocks │
    │ SCADA / WHMI Visualization      │
    └─────────────────────────────────┘
              │ Ethernet
              ▼
    SCADA / PCM600 / WHMI (Engineering Tools)

---

## Tools & Technologies

- **Hardware**
  - ABB SSC600 IED
  - Typhoon HIL604 Real-Time Simulator

- **Software**
  - PCM600 – Protection & Control IED Manager
  - IEC 61850 System Configuration Tool
  - WHMI – SSC600 Web HMI
  - SCADA Panel in Typhoon HIL

- **Standards**
  - IEC 61850-8-1 (GOOSE, MMS)
  - IEC 61850-9-2 LE (Sampled Values)
