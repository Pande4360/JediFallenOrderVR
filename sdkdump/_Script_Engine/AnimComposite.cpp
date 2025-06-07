#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimComposite.hpp"
#include "AnimCompositeBase.hpp"
void* _Script_Engine::AnimComposite::get_AnimationTrack() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimComposite::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimComposite");
    return result;
}
