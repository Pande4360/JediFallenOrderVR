#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Script_UMG {
struct PanelWidget;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base {
struct UI_SubMenu_Base_C;
}
namespace _Game_UI_GameMenu_Structs_ST_URLInfo {
struct ST_URLInfo;
}
namespace _Game_GlobalData_Functions_func_UMG {
#pragma pack(push, 1)
struct func_UMG_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UMG_AtNewURL(_Script_GameplayTags::GameplayTag ProposedURL, _Script_CoreUObject::Object* __WorldContext, bool& AtNewURL);
    void UMG_URLFromDifferentTopnav(_Script_GameplayTags::GameplayTag ProposedURL, _Script_CoreUObject::Object* __WorldContext, bool& Different);
    void CurrentlyUsingPCControls(_Script_CoreUObject::Object* __WorldContext, bool& PCControls);
    void IsLoadingScreenVisible(_Script_CoreUObject::Object* __WorldContext, bool& Visible);
    void ShowLoadingScreen(_Script_CoreUObject::Object* __WorldContext);
    void IsConsole(_Script_CoreUObject::Object* __WorldContext, bool& IsConsole);
    void UMG_QueueButtonFocusURLRequest(_Script_GameplayTags::GameplayTag URL, _Script_RsGameTechRT::RsUiButton* RequestingButton, _Script_CoreUObject::Object* __WorldContext);
    void UMG_GameMenuLog(void* Message, void* Message2, void* Message3, void* Message4, _Script_CoreUObject::Object* __WorldContext);
    void URL_HasUnlockedAndUnreadDescendants(_Script_GameplayTags::GameplayTag Parent, _Script_CoreUObject::Object* __WorldContext, bool& Result);
    void GetSiblingTags(_Script_GameplayTags::GameplayTag GameplayTag, bool IncludeSelf, _Script_CoreUObject::Object* __WorldContext, bool& HasSiblings, void*& SiblingTags);
    void GetFinalSubstring_NOTLOCSAFE(void* String, void* Delimiter, _Script_CoreUObject::Object* __WorldContext, void*& Substring);
    void GetAncestorTag(_Script_GameplayTags::GameplayTag GameplayTag, int32_t Generation, _Script_CoreUObject::Object* __WorldContext, bool& HasAncestor, _Script_GameplayTags::GameplayTag& AncestorTag);
    void GetGrandparentTag(_Script_GameplayTags::GameplayTag GameplayTag, _Script_CoreUObject::Object* __WorldContext, bool& HasGrandparent, _Script_GameplayTags::GameplayTag& GrandparentTag);
    void UMGClaimFocus(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C* SubMenu, _Script_CoreUObject::Object* __WorldContext);
    void GetLeftNavURLForURL(_Script_GameplayTags::GameplayTag FullURL, _Script_CoreUObject::Object* __WorldContext, _Script_GameplayTags::GameplayTag& BaseURL);
    void UMGRequestURL(_Script_GameplayTags::GameplayTag URL, _Script_CoreUObject::Object* __WorldContext);
    void GetInfoForURL(_Script_GameplayTags::GameplayTag URL, _Script_CoreUObject::Object* __WorldContext, _Game_UI_GameMenu_Structs_ST_URLInfo::ST_URLInfo& Info);
    void GetBaseURLForURL(_Script_GameplayTags::GameplayTag FullURL, _Script_CoreUObject::Object* __WorldContext, _Script_GameplayTags::GameplayTag& BaseURL);
    void GetAllDescendantWidgets(_Script_UMG::PanelWidget* Parent, _Script_CoreUObject::Object* __WorldContext, void*& Result);
}; // Size: 0x28
#pragma pack(pop)
}
