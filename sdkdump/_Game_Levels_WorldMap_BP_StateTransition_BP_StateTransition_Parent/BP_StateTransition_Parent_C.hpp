#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent {
#pragma pack(push, 1)
struct BP_StateTransition_Parent_C : public _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor {
    private: char pad_398[0x10]; public:
    void* get_UberGraphFrame();
    void* get_WidgetType();
    void* get_Planet();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ShowWidget();
    void ExecuteUbergraph_BP_StateTransition_Parent(int32_t EntryPoint);
}; // Size: 0x3a8
#pragma pack(pop)
}
