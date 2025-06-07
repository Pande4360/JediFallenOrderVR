#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlendSpace.hpp"
#include "BlendSpaceBase.hpp"
void* _Script_Engine::BlendSpace::get_AxisToScaleAnimation() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_Engine::BlendSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlendSpace");
    return result;
}
