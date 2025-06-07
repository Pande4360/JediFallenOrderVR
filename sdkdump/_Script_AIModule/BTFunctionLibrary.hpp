#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AIModule {
struct BehaviorTreeComponent;
}
namespace _Script_AIModule {
struct BTNode;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
struct BlackboardKeySelector;
}
namespace _Script_AIModule {
struct BlackboardComponent;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void StopUsingExternalEvent(_Script_AIModule::BTNode* NodeOwner);
    void StartUsingExternalEvent(_Script_AIModule::BTNode* NodeOwner, _Script_Engine::Actor* OwningActor);
    void SetBlackboardValueAsVector(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, _Script_CoreUObject::Vector Value);
    void SetBlackboardValueAsString(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, void* Value);
    void SetBlackboardValueAsRotator(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, _Script_CoreUObject::Rotator Value);
    void SetBlackboardValueAsObject(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, _Script_CoreUObject::Object* Value);
    void SetBlackboardValueAsName(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, void* Value);
    void SetBlackboardValueAsInt(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, int32_t Value);
    void SetBlackboardValueAsFloat(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, float Value);
    void SetBlackboardValueAsEnum(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, void* Value);
    void SetBlackboardValueAsClass(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, void* Value);
    void SetBlackboardValueAsBool(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key, bool Value);
    _Script_AIModule::BlackboardComponent* GetOwnersBlackboard(_Script_AIModule::BTNode* NodeOwner);
    _Script_AIModule::BehaviorTreeComponent* GetOwnerComponent(_Script_AIModule::BTNode* NodeOwner);
    _Script_CoreUObject::Vector GetBlackboardValueAsVector(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    void* GetBlackboardValueAsString(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    _Script_CoreUObject::Rotator GetBlackboardValueAsRotator(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    _Script_CoreUObject::Object* GetBlackboardValueAsObject(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    void* GetBlackboardValueAsName(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    int32_t GetBlackboardValueAsInt(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    float GetBlackboardValueAsFloat(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    void* GetBlackboardValueAsEnum(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    void* GetBlackboardValueAsClass(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    bool GetBlackboardValueAsBool(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    _Script_Engine::Actor* GetBlackboardValueAsActor(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    void ClearBlackboardValueAsVector(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
    void ClearBlackboardValue(_Script_AIModule::BTNode* NodeOwner, _Script_AIModule::BlackboardKeySelector& Key);
}; // Size: 0x28
#pragma pack(pop)
}
