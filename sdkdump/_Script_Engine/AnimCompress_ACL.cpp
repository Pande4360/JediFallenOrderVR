#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress_ACL.hpp"
#include "AnimCompress_ACLBase.hpp"
float& _Script_Engine::AnimCompress_ACL::get_SafetyFallbackThreshold() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::AnimCompress_ACL::get_DefaultVirtualVertexDistance() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::AnimCompress_ACL::get_CompressionLevel() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::AnimCompress_ACL::get_ErrorThreshold() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::AnimCompress_ACL::get_SafeVirtualVertexDistance() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_ACL::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_ACL");
    return result;
}
