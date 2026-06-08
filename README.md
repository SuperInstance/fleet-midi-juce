<div align="center">

# ⚒️ fleet-midi-juce

> *JUCE VST/AU plugin template for receiving fleet MIDI streams*

[![CI](https://img.shields.io/github/actions/workflow/status/SuperInstance/fleet-midi-juce/ci.yml?style=flat-square&logo=github&label=CI)](https://github.com/SuperInstance/fleet-midi-juce/actions)
[![npm](https://img.shields.io/badge/npm-%40superinstance%2Fmidi--juce-cb3837?style=flat-square&logo=npm)](https://www.npmjs.com/package/@superinstance/midi-juce)
[![Docker](https://img.shields.io/badge/docker-ghcr-2496ed?style=flat-square&logo=docker)](https://github.com/SuperInstance/fleet-midi-juce/pkgs/container/fleet-midi-juce)
[![License](https://img.shields.io/badge/license-MIT-blue?style=flat-square)](LICENSE)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen?style=flat-square)](http://makeapullrequest.com)

---

Industry-standard C++ plugin framework for building custom VST3/AU/AAX instruments. Cross-platform (macOS, Windows, Linux), hardware-accurate MIDI routing, with Projucer-ready template.

---

## 📦 Installation

```bash
# npm
npm install @superinstance/midi-juce

# Docker
docker pull ghcr.io/superinstance/fleet-midi-juce:latest

# Clone
git clone https://github.com/SuperInstance/fleet-midi-juce.git
```

## 🚀 Quick Start

```bash
# Generate Projucer project:
# Open Projucer, create new Audio Plugin project
# Target: VST3 + AU + AAX
# Copy lib/plugin-template.h as your processor header

# Build:
# Projucer → export Xcode (macOS) / Visual Studio (Windows)
# cmake --build Builds/ --target fleet-midi-vst3
```

## 🏗️ Architecture

```
┌─────────────────────────────────────────────────────┐
│                                                     │
│   Fleet MIDI → VST Plugin → Any DAW                 │
│                                                     │
│   ┌────────────┐    ┌────────────┐    ┌──────────┐   │
│   │ I2I       │───▶│ JUCE      │───▶│ Ableton  │   │
│   │ Harbor    │    │ Processor │    │ / Logic  │   │
│   └────────────┘    └────────────┘    └──────────┘   │
│                                                     │
│   Fleet agent thoughts → hardware MIDI out           │
│   Build with Projucer → VST3 / AU / AAX              │
│   Cross-platform: macOS · Windows · Linux            │
└─────────────────────────────────────────────────────┘
```

## 📡 API

### C++ Plugin Template
`lib/plugin-template.h` — a JUCE AudioProcessor subclass ready for customization.

### Building
Use Projucer to generate platform-specific build files:
1. New Audio Plugin Project
2. Add lib/plugin-template.h as source
3. Export → Xcode/Visual Studio/CMake
4. Build → VST3/AU/AAX installs to system

## 🧪 Beta Tested

Part of the [SuperInstance MIDI Fleet](https://github.com/SuperInstance/construct-coordination/blob/main/FLEET_MIDI.md). Every push verified via CI — zeroshot tests ensure zero-config operation out of the box.

## 🤝 Related

- [fleet-bridge](https://github.com/SuperInstance/fleet-bridge) — I2I bottle transport
- [construct-coordination](https://github.com/SuperInstance/construct-coordination) — Fleet catalog

---

<div align="center">
<sub>Built with ⚒️ for the SuperInstance fleet • <a href="https://github.com/SuperInstance">github.com/SuperInstance</a></sub>
</div>
