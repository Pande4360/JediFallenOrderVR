#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator_BlackboardBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_Blackboard : public BTDecorator_BlackboardBase {
    private: char pad_90[0x30]; public:
    int32_t& get_IntValue();
    float& get_FloatValue();
    void* get_StringValue();
    void* get_CachedDescription();
    void* get_OperationType();
    void* get_NotifyObserver();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
