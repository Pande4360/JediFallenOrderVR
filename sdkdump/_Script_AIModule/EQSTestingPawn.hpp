#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_AIModule {
struct EnvQuery;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EQSTestingPawn : public _Script_Engine::Character {
    private: char pad_780[0xa0]; public:
    _Script_AIModule::EnvQuery*& get_QueryTemplate();
    void* get_QueryParams();
    void* get_QueryConfig();
    float& get_TimeLimitPerStep();
    int32_t& get_StepToDebugDraw();
    void* get_HighlightMode();
    bool get_bDrawLabels();
    void set_bDrawLabels(bool value);
    bool get_bDrawFailedItems();
    void set_bDrawFailedItems(bool value);
    bool get_bReRunQueryOnlyOnFinishedMove();
    void set_bReRunQueryOnlyOnFinishedMove(bool value);
    bool get_bShouldBeVisibleInGame();
    void set_bShouldBeVisibleInGame(bool value);
    bool get_bTickDuringGame();
    void set_bTickDuringGame(bool value);
    void* get_QueryingMode();
    void* get_NavAgentProperties();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x820
#pragma pack(pop)
}
