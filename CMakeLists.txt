cmake_minimum_required(VERSION 3.15)

project(GUI_APP VERSION 0.0.1)

add_subdirectory(JUCE)
add_subdirectory(MODULES)

juce_add_gui_app(GuiApp
    COMPANY_NAME "MyCompany"
    PRODUCT_NAME "CMakeTest")

target_sources(GuiApp
    PRIVATE
        Main.cpp
        MainComponent.cpp)

target_compile_definitions(GuiApp
    PRIVATE
        JUCE_WEB_BROWSER=0 
        JUCE_USE_CURL=0    
        JUCE_APPLICATION_NAME_STRING="$<TARGET_PROPERTY:GuiApp,JUCE_PRODUCT_NAME>"
        JUCE_APPLICATION_VERSION_STRING="$<TARGET_PROPERTY:GuiApp,JUCE_VERSION>")

juce_add_binary_data(GuiAppData SOURCES
    "Resources/drawing.svg"
    "Resources/picture.png")

target_link_libraries(GuiApp
    PRIVATE
        GuiAppData
        juce::juce_gui_extra
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_lto_flags
        juce::juce_recommended_warning_flags)
