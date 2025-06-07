#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwGameInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_r4GameInstance {
#pragma pack(push, 1)
struct r4GameInstance_C : public _Script_SwGame::SwGameInstance {
    private: char pad_1e8[0x20]; public:
    void* get_UberGraphFrame();
    void* get_LVL_GlobalEvent();
    bool get_VSLintroFlyIn();
    void set_VSLintroFlyIn(bool value);
    bool get_VSL150LightsOn();
    void set_VSL150LightsOn(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveInit();
    void DetectGlobalEvents(void* ID);
    void ExecuteUbergraph_r4GameInstance(int32_t EntryPoint);
    void LVL_GlobalEvent__DelegateSignature(void* ID);
}; // Size: 0x208
#pragma pack(pop)
}
