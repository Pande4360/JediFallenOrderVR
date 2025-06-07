#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RAPDatabase.hpp"
#include "RAPSystem.hpp"
void* _Script_RsGameTechRT::RAPSystem::get_RAPConversationStartedEvent() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_RsGameTechRT::RAPSystem::get_RAPLineEndedEvent() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RAPSystem::get_ShowCinematicSubtitleEvent() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RAPSystem::get_HideCinematicSubtitleEvent() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RAPSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RAPSystem");
    return result;
}
void* _Script_RsGameTechRT::RAPSystem::get_RAPLineStartedEvent() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RAPSystem::get_RAPConversationFinishedEvent() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_RsGameTechRT::RAPSystem::get_RAPLineInteractionEvent() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_RsGameTechRT::RAPDatabase* _Script_RsGameTechRT::RAPSystem::GetRAPDatabase() {
    return;
}
