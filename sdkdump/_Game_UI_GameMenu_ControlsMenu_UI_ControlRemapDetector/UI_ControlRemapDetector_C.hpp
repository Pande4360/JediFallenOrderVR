#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_SwGame {
struct SWGameUserSettings;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn {
struct UI_ControlRemapBtn_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap {
struct Struct_InputRemap;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector {
#pragma pack(push, 1)
struct UI_ControlRemapDetector_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x170]; public:
    void* get_UberGraphFrame();
    void* get_MasterList();
    _Script_SwGame::SWGameUserSettings*& get_UserSettings();
    void* get_ChosenAction();
    void* get_CheckKey();
    bool get_CurrentIsController();
    void set_CurrentIsController(bool value);
    void* get_RemapCategory();
    bool get_IsCheckingHeld();
    void set_IsCheckingHeld(bool value);
    bool get_IsCheckingInitial();
    void set_IsCheckingInitial(bool value);
    float& get_HoldTime();
    float& get_HoldThreshhold();
    void* get_LandExcl();
    void* get_ClimbingExcl();
    void* get_WaterExcl();
    void* get_MapExcl();
    float& get_HoldPercentage();
    void* get_InputSwapped();
    _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C*& get_InputRemapBtn();
    void* get_StoppedDetectingInput();
    void* get_OriginalKey();
    bool get_ShouldIgnoreAccept();
    void set_ShouldIgnoreAccept(bool value);
    void* get_ActionData();
    void* get_CannotRemapMessage();
    void* get_KeyUnboundFromAction();
    void* get_UnboundAxes();
    static _Script_CoreUObject::Class* static_class();
    bool KeyEqualsNone(_Script_InputCore::Key InputKey);
    bool EscapeKeyPressed();
    bool IsSameInputType(bool IsGamepad, _Script_InputCore::Key& Key);
    void CheckIgnoredKeys(_Script_InputCore::Key InKey, bool& Ignore, bool& InitialAcceptIgnore, void*& IgnoredAction);
    void RemapAxis(bool isController, _Script_InputCore::Key NewKey, _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap& RemapData);
    void RemapAction(void* Action, bool isController, _Script_InputCore::Key NewKey);
    void RemapActionAliases(void* Action, bool isController, _Script_InputCore::Key NewKey);
    void RemapActionHelper(void* Action, bool isController, _Script_InputCore::Key NewKey);
    void TryUnbindKeyFromAction(void* Action, _Script_InputCore::Key NewKey, _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap& ActionRemapData, bool isController, bool& IsUnbound);
    void ErrorIndexOutOfRange(int32_t inInt);
    void GetExclContainingCategory(void*& ActionName, void*& Categories);
    void GetExclusivityList(void* Category, void*& OutputPin);
    void UnbindKeyFromAllActions(void* ActionName, _Script_InputCore::Key NewKey, bool isController);
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void StartInputChecking(void* ChosenAction, _Script_InputCore::Key OriginalKey, bool CurrentIsController, _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* InputRemapBtn);
    void EndCheck();
    void Remap();
    void ExecuteUbergraph_UI_ControlRemapDetector(int32_t EntryPoint);
    void KeyUnboundFromAction__DelegateSignature(_Script_InputCore::Key Key, void*& Actions);
    void CannotRemapMessage__DelegateSignature(void* IgnoredAction, _Script_InputCore::Key IgnoredKey);
    void StoppedDetectingInput__DelegateSignature();
    void InputSwapped__DelegateSignature();
}; // Size: 0x378
#pragma pack(pop)
}
