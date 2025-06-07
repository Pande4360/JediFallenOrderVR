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
struct MovieSceneEvaluationTemplate {
    private: char pad_0[0x2f0]; public:
    void* get_Tracks();
    void* get_EvaluationField();
    void* get_Hierarchy();
    void* get_SequenceSignature();
    void* get_TemplateSerialNumber();
    void* get_TemplateLedger();
    void* get_TrackFieldData();
    void* get_SubSectionFieldData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2f0
#pragma pack(pop)
}
