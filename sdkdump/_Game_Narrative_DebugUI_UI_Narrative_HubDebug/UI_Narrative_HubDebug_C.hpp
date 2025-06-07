#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration\ST_HubDebugTagConfiguration.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_DebugUI_UI_Narrative_HubDebug {
#pragma pack(push, 1)
struct UI_Narrative_HubDebug_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x30]; public:
    _Script_UMG::TextBlock*& get_Txt_Dialog();
    _Script_UMG::TextBlock*& get_Txt_Gesture();
    _Script_UMG::TextBlock*& get_Txt_HubState();
    _Script_UMG::TextBlock*& get_Txt_Tags();
    _Script_UMG::TextBlock*& get_Txt_Ticking();
    _Script_UMG::TextBlock*& get_Txt_UID();
    static _Script_CoreUObject::Class* static_class();
    void UpdateHubTicking(bool Ticking);
    void UpdateRequiredTags(_Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration::ST_HubDebugTagConfiguration Config);
    void UpdateGesture(void* Gesture);
    void UpdateHubUID(int32_t UID);
    void UpdateHubDialogue(void* Dialogue);
    void UpdateHubState(void* State);
}; // Size: 0x638
#pragma pack(pop)
}
