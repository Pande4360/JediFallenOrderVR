#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryTest : public EnvQueryNode {
    private: char pad_30[0x190]; public:
    int32_t& get_TestOrder();
    void* get_TestPurpose();
    void* get_TestComment();
    void* get_MultipleContextFilterOp();
    void* get_MultipleContextScoreOp();
    void* get_FilterType();
    void* get_BoolValue();
    void* get_FloatValueMin();
    void* get_FloatValueMax();
    void* get_ScoringEquation();
    void* get_ClampMinType();
    void* get_ClampMaxType();
    void* get_NormalizationType();
    void* get_ScoreClampMin();
    void* get_ScoreClampMax();
    void* get_ScoringFactor();
    void* get_ReferenceValue();
    bool get_bDefineReferenceValue();
    void set_bDefineReferenceValue(bool value);
    bool get_bWorkOnFloatValues();
    void set_bWorkOnFloatValues(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c0
#pragma pack(pop)
}
