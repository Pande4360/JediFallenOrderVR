#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SubUVAnimation.hpp"
#include "Texture2D.hpp"
_Script_Engine::Texture2D*& _Script_Engine::SubUVAnimation::get_SubUVTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::SubUVAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SubUVAnimation");
    return result;
}
int32_t& _Script_Engine::SubUVAnimation::get_SubImages_Horizontal() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::SubUVAnimation::get_SubImages_Vertical() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::SubUVAnimation::get_AlphaThreshold() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::SubUVAnimation::get_OpacitySourceMode() {
    return (void*)((uintptr_t)this + 0x39);
}
void* _Script_Engine::SubUVAnimation::get_BoundingMode() {
    return (void*)((uintptr_t)this + 0x38);
}
