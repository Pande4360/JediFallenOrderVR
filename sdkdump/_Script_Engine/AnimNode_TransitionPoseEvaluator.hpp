#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_TransitionPoseEvaluator : public AnimNode_Base {
    private: char pad_30[0x48]; public:
    void* get_DataSource();
    void* get_EvaluatorMode();
    int32_t& get_FramesToCachePose();
    int32_t& get_CacheFramesRemaining();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
