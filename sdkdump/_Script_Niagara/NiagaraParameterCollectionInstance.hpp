#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
namespace _Script_Niagara {
struct NiagaraParameterCollection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraParameterCollectionInstance : public _Script_CoreUObject::Object {
    private: char pad_28[0xf8]; public:
    _Script_Niagara::NiagaraParameterCollection*& get_Collection();
    void* get_OverridenParameters();
    void* get_ParameterStorage();
    static _Script_CoreUObject::Class* static_class();
    void SetVectorParameter(void* InVariableName, _Script_CoreUObject::Vector InValue);
    void SetVector4Parameter(void* InVariableName, _Script_CoreUObject::Vector4& InValue);
    void SetVector2DParameter(void* InVariableName, _Script_CoreUObject::Vector2D InValue);
    void SetQuatParameter(void* InVariableName, _Script_CoreUObject::Quat& InValue);
    void SetIntParameter(void* InVariableName, int32_t InValue);
    void SetFloatParameter(void* InVariableName, float InValue);
    void SetColorParameter(void* InVariableName, _Script_CoreUObject::LinearColor InValue);
    void SetBoolParameter(void* InVariableName, bool InValue);
    _Script_CoreUObject::Vector GetVectorParameter(void* InVariableName);
    _Script_CoreUObject::Vector4 GetVector4Parameter(void* InVariableName);
    _Script_CoreUObject::Vector2D GetVector2DParameter(void* InVariableName);
    _Script_CoreUObject::Quat GetQuatParameter(void* InVariableName);
    int32_t GetIntParameter(void* InVariableName);
    float GetFloatParameter(void* InVariableName);
    _Script_CoreUObject::LinearColor GetColorParameter(void* InVariableName);
    bool GetBoolParameter(void* InVariableName);
}; // Size: 0x120
#pragma pack(pop)
}
