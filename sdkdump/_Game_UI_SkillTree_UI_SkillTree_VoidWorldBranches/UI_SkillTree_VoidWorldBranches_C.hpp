#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_SkillTree_UI_SkillTree_VoidWorldBranches {
#pragma pack(push, 1)
struct UI_SkillTree_VoidWorldBranches_C : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetComponent*& get_Widget();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void InitializeHeroBindings();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_UI_SkillTree_VoidWorldBranches(int32_t EntryPoint);
}; // Size: 0x380
#pragma pack(pop)
}
