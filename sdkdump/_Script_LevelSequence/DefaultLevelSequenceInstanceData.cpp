#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "DefaultLevelSequenceInstanceData.hpp"
_Script_Engine::Actor*& _Script_LevelSequence::DefaultLevelSequenceInstanceData::get_TransformOriginActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30);
}
void* _Script_LevelSequence::DefaultLevelSequenceInstanceData::get_TransformOrigin() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_LevelSequence::DefaultLevelSequenceInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.DefaultLevelSequenceInstanceData");
    return result;
}
