#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Interactables_BP_NarrativeLabelComponent {
#pragma pack(push, 1)
struct BP_NarrativeLabelComponent_C : public _Script_Engine::Actor {
    private: char pad_360[0x28]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_Root();
    _Script_Engine::TextRenderComponent*& get_LabelText();
    float& get_CustomTextSize();
    float& get_CustomEditorRotation();
    bool get_ShouldShow();
    void set_ShouldShow(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AttemptChangeVisibility(bool NewVisibility);
    void UpdateRotation();
    void SetUpNarrativeLabel(_Script_Engine::Actor* Owner, bool Construction);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_NarrativeLabelComponent(int32_t EntryPoint);
}; // Size: 0x388
#pragma pack(pop)
}
