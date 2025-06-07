#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "AnimNotify_AISoundEvent.hpp"
void* _Script_RsGameTechRT::AnimNotify_AISoundEvent::get_SoundType() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimNotify_AISoundEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.AnimNotify_AISoundEvent");
    return result;
}
