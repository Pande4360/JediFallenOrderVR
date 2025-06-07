#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DialogueNode.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DialoguePlugin {
#pragma pack(push, 1)
struct DialogueUserWidget : public _Script_UMG::UserWidget {
    private: char pad_208[0x8]; public:
    _Script_Engine::Actor*& get_NPCActor();
    static _Script_CoreUObject::Class* static_class();
    void RunEventsForNode(_Script_DialoguePlugin::DialogueNode Node);
    bool IsConditionsMetForNode(_Script_DialoguePlugin::DialogueNode Node);
}; // Size: 0x210
#pragma pack(pop)
}
