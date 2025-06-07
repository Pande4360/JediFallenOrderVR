#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeConcatenator.hpp"
void* _Script_Engine::SoundNodeConcatenator::get_InputVolume() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeConcatenator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeConcatenator");
    return result;
}
