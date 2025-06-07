#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISense.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISense_Sight : public AISense {
    private: char pad_88[0xd8]; public:
    int32_t& get_MaxTracesPerTick();
    int32_t& get_MinQueriesPerTimeSliceCheck();
    double& get_MaxTimeSlicePerTick();
    float& get_HighImportanceQueryDistanceThreshold();
    float& get_MaxQueryImportance();
    float& get_SightLimitQueryImportance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
