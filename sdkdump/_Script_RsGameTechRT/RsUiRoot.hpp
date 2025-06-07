#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsUiRoot : public _Script_UMG::UserWidget {
    private: char pad_208[0x98]; public:
    void* get_OnInputDeviceChanged();
    void* get_SavingIndicatorWidget();
    int32_t& get_SavingIndicatorZOrder();
    float& get_SavingIndicatorMinDuration();
    void* get_OpenWindows();
    void* get_ExistingWindows();
    static _Script_CoreUObject::Class* static_class();
    void SetSavingIndicatorVisible(bool bShowRequested, bool bShowText);
    void Reset();
    _Script_RsGameTechRT::RsUiWindow* OpenUiWindow(void* UiWindowClass, bool bCloseOtherWindows, int32_t ZOrder);
    void OnSaveGameFailed();
    void OnReset();
    void OnLoadGameMissingContent();
    void OnLoadGameFailed(bool bHasBackup);
    bool IsUiWindowOpen(void* UiWindowClass);
    bool GetSavingIndicatorTextVisible();
    void* GetOpenUiWindows();
    _Script_RsGameTechRT::RsUiRoot* GetHudRoot(_Script_CoreUObject::Object* WorldContextObject);
    void* GetCurrentUiInputDevice();
    _Script_RsGameTechRT::RsUiWindow* FindOpenUiWindowOfClass(void* UiWindowClass);
    bool CloseUiWindowOfClass(void* UiWindowClass);
    void CloseAllUiWindows();
}; // Size: 0x2a0
#pragma pack(pop)
}
