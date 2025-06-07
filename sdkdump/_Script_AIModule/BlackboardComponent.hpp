#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_AIModule {
struct BrainComponent;
}
namespace _Script_AIModule {
struct BlackboardData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BlackboardComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0xf8]; public:
    _Script_AIModule::BrainComponent*& get_BrainComp();
    _Script_AIModule::BlackboardData*& get_BlackboardAsset();
    void* get_KeyInstances();
    static _Script_CoreUObject::Class* static_class();
    void SetValueAsVector(void*& KeyName, _Script_CoreUObject::Vector VectorValue);
    void SetValueAsString(void*& KeyName, void* StringValue);
    void SetValueAsRotator(void*& KeyName, _Script_CoreUObject::Rotator VectorValue);
    void SetValueAsObject(void*& KeyName, _Script_CoreUObject::Object* ObjectValue);
    void SetValueAsName(void*& KeyName, void* NameValue);
    void SetValueAsInt(void*& KeyName, int32_t IntValue);
    void SetValueAsFloat(void*& KeyName, float FloatValue);
    void SetValueAsEnum(void*& KeyName, void* EnumValue);
    void SetValueAsClass(void*& KeyName, void* ClassValue);
    void SetValueAsBool(void*& KeyName, bool BoolValue);
    bool IsVectorValueSet(void*& KeyName);
    _Script_CoreUObject::Vector GetValueAsVector(void*& KeyName);
    void* GetValueAsString(void*& KeyName);
    _Script_CoreUObject::Rotator GetValueAsRotator(void*& KeyName);
    _Script_CoreUObject::Object* GetValueAsObject(void*& KeyName);
    void* GetValueAsName(void*& KeyName);
    int32_t GetValueAsInt(void*& KeyName);
    float GetValueAsFloat(void*& KeyName);
    void* GetValueAsEnum(void*& KeyName);
    void* GetValueAsClass(void*& KeyName);
    bool GetValueAsBool(void*& KeyName);
    bool GetRotationFromEntry(void*& KeyName, _Script_CoreUObject::Rotator& ResultRotation);
    bool GetLocationFromEntry(void*& KeyName, _Script_CoreUObject::Vector& ResultLocation);
    void ClearValue(void*& KeyName);
}; // Size: 0x268
#pragma pack(pop)
}
