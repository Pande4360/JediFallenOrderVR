#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeDelay.hpp"
float& _Script_Engine::SoundNodeDelay::get_DelayMin() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::SoundNodeDelay::get_DelayMax() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeDelay::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeDelay");
    return result;
}
