#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct InputAxisKeyMapping;
}
namespace _Script_Engine {
struct InputActionKeyMapping;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InputSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x118]; public:
    void* get_AxisConfig();
    bool get_bAltEnterTogglesFullscreen();
    void set_bAltEnterTogglesFullscreen(bool value);
    bool get_bF11TogglesFullscreen();
    void set_bF11TogglesFullscreen(bool value);
    bool get_bUseMouseForTouch();
    void set_bUseMouseForTouch(bool value);
    bool get_bEnableMouseSmoothing();
    void set_bEnableMouseSmoothing(bool value);
    bool get_bEnableFOVScaling();
    void set_bEnableFOVScaling(bool value);
    bool get_bCaptureMouseOnLaunch();
    void set_bCaptureMouseOnLaunch(bool value);
    bool get_bDefaultViewportMouseLock();
    void set_bDefaultViewportMouseLock(bool value);
    bool get_bAlwaysShowTouchInterface();
    void set_bAlwaysShowTouchInterface(bool value);
    bool get_bShowConsoleOnFourFingerTap();
    void set_bShowConsoleOnFourFingerTap(bool value);
    bool get_bEnableGestureRecognizer();
    void set_bEnableGestureRecognizer(bool value);
    bool get_bUseAutocorrect();
    void set_bUseAutocorrect(bool value);
    void* get_ExcludedAutocorrectOS();
    void* get_ExcludedAutocorrectCultures();
    void* get_ExcludedAutocorrectDeviceModels();
    void* get_DefaultViewportMouseCaptureMode();
    void* get_DefaultViewportMouseLockMode();
    float& get_FOVScale();
    float& get_DoubleClickTime();
    void* get_ActionMappings();
    void* get_AxisMappings();
    void* get_DefaultActionMappings();
    void* get_DefaultAxisMappings();
    void* get_OverrideActionMappings_AZERTY();
    void* get_OverrideAxisMappings_AZERTY();
    void* get_OverrideActionMappings_QWERTZ();
    void* get_OverrideAxisMappings_QWERTZ();
    void* get_DefaultTouchInterface();
    void* get_ConsoleKey();
    void* get_ConsoleKeys();
    static _Script_CoreUObject::Class* static_class();
    void SaveKeyMappings();
    void RemoveAxisMapping(_Script_Engine::InputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void RemoveActionMapping(_Script_Engine::InputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void* GetKeyboardLanguageType();
    _Script_Engine::InputSettings* GetInputSettings();
    _Script_InputCore::Key GetFirstKeyForAction(void* InActionName, bool UsingGamepad);
    void GetAxisNames(void*& AxisNames);
    void GetAxisMappingByName(void* InAxisName, void*& OutMappings);
    void GetAllAxisMappingsForAxis(void* InAxisName, void*& OutAxisMapping);
    void GetAllActionMappingsForAction(void* InActionName, void*& OutActionMapping, bool ClearOutput);
    void GetActionNames(void*& ActionNames);
    void GetActionMappingByName(void* InActionName, void*& OutMappings);
    void ForceRebuildKeymaps();
    void AddAxisMapping(_Script_Engine::InputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void AddActionMapping(_Script_Engine::InputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
}; // Size: 0x140
#pragma pack(pop)
}
