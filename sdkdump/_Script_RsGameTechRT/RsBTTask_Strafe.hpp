#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTTask_DirectMoveToBlackboardBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_Strafe : public RsBTTask_DirectMoveToBlackboardBase {
    private: char pad_b0[0x38]; public:
    void* get_StrafeDirection();
    void* get_StrafeDirectionKey();
    float& get_StrafeDistance();
    bool get_bUseStrafeDirectionBlackboardKey();
    void set_bUseStrafeDirectionBlackboardKey(bool value);
    bool get_bObserveBlackboardStrafeDirection();
    void set_bObserveBlackboardStrafeDirection(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
