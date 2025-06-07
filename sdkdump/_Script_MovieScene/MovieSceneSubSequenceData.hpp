#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSubSequenceData {
    private: char pad_0[0xa8]; public:
    void* get_Sequence();
    void* get_RootToSequenceTransform();
    void* get_TickResolution();
    void* get_DeterministicSequenceID();
    void* get_PlayRange();
    void* get_PreRollRange();
    void* get_PostRollRange();
    int32_t& get_HierarchicalBias();
    void* get_InstanceData();
    void* get_SubSectionSignature();
    void* get_OuterToInnerTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
