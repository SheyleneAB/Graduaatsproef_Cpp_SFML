# Introduction 
A game in sfml.

# Getting Started
for opening in visual studio change these properties

platform win 32

c++ general (all config)
$(SolutionDir)External\SFML\include

c++ language (all config)
17

linker (all config)
$(SolutionDir)External\SFML\lib

Lines for Linker-Input (Release):
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
sfml-system.lib

Lines for Linker-Input (Debug):
sfml-graphics-d.lib
sfml-window-d.lib
sfml-audio-d.lib
sfml-network-d.lib
sfml-system-d.lib

