#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AIRequestID.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIAsyncTaskBlueprintProxy : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    void* get_OnSuccess();
    void* get_OnFail();
    static _Script_CoreUObject::Class* static_class();
    void OnMoveCompleted(_Script_AIModule::AIRequestID RequestID, void* MovementResult);
}; // Size: 0x68
#pragma pack(pop)
}
