#include "..\FUObjectArray.hpp"
#include "BlackboardComponent.hpp"
#include "BlackboardData.hpp"
#include "BrainComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void _Script_AIModule::BlackboardComponent::SetValueAsRotator(void*& KeyName, _Script_CoreUObject::Rotator VectorValue) {
    return;
}
void* _Script_AIModule::BlackboardComponent::get_KeyInstances() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_AIModule::BrainComponent*& _Script_AIModule::BlackboardComponent::get_BrainComp() {
    return *(_Script_AIModule::BrainComponent**)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_AIModule::BlackboardComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BlackboardComponent");
    return result;
}
_Script_AIModule::BlackboardData*& _Script_AIModule::BlackboardComponent::get_BlackboardAsset() {
    return *(_Script_AIModule::BlackboardData**)((uintptr_t)this + 0x178);
}
void _Script_AIModule::BlackboardComponent::SetValueAsObject(void*& KeyName, _Script_CoreUObject::Object* ObjectValue) {
    return;
}
void _Script_AIModule::BlackboardComponent::SetValueAsVector(void*& KeyName, _Script_CoreUObject::Vector VectorValue) {
    return;
}
void _Script_AIModule::BlackboardComponent::SetValueAsString(void*& KeyName, void* StringValue) {
    return;
}
void _Script_AIModule::BlackboardComponent::SetValueAsName(void*& KeyName, void* NameValue) {
    return;
}
void _Script_AIModule::BlackboardComponent::SetValueAsInt(void*& KeyName, int32_t IntValue) {
    return;
}
void _Script_AIModule::BlackboardComponent::SetValueAsFloat(void*& KeyName, float FloatValue) {
    return;
}
void* _Script_AIModule::BlackboardComponent::GetValueAsString(void*& KeyName) {
    return;
}
void _Script_AIModule::BlackboardComponent::SetValueAsEnum(void*& KeyName, void* EnumValue) {
    return;
}
void _Script_AIModule::BlackboardComponent::SetValueAsClass(void*& KeyName, void* ClassValue) {
    return;
}
void _Script_AIModule::BlackboardComponent::SetValueAsBool(void*& KeyName, bool BoolValue) {
    return;
}
bool _Script_AIModule::BlackboardComponent::IsVectorValueSet(void*& KeyName) {
    return;
}
_Script_CoreUObject::Vector _Script_AIModule::BlackboardComponent::GetValueAsVector(void*& KeyName) {
    return;
}
_Script_CoreUObject::Rotator _Script_AIModule::BlackboardComponent::GetValueAsRotator(void*& KeyName) {
    return;
}
_Script_CoreUObject::Object* _Script_AIModule::BlackboardComponent::GetValueAsObject(void*& KeyName) {
    return;
}
void* _Script_AIModule::BlackboardComponent::GetValueAsName(void*& KeyName) {
    return;
}
int32_t _Script_AIModule::BlackboardComponent::GetValueAsInt(void*& KeyName) {
    return;
}
float _Script_AIModule::BlackboardComponent::GetValueAsFloat(void*& KeyName) {
    return;
}
void* _Script_AIModule::BlackboardComponent::GetValueAsEnum(void*& KeyName) {
    return;
}
void* _Script_AIModule::BlackboardComponent::GetValueAsClass(void*& KeyName) {
    return;
}
bool _Script_AIModule::BlackboardComponent::GetValueAsBool(void*& KeyName) {
    return;
}
bool _Script_AIModule::BlackboardComponent::GetRotationFromEntry(void*& KeyName, _Script_CoreUObject::Rotator& ResultRotation) {
    return;
}
bool _Script_AIModule::BlackboardComponent::GetLocationFromEntry(void*& KeyName, _Script_CoreUObject::Vector& ResultLocation) {
    return;
}
void _Script_AIModule::BlackboardComponent::ClearValue(void*& KeyName) {
    return;
}
