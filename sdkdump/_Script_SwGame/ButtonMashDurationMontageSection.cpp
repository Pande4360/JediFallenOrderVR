#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "ButtonMashDurationMontageSection.hpp"
#include "ButtonMashType.hpp"
_Script_Engine::AnimMontage*& _Script_SwGame::ButtonMashDurationMontageSection::get_Montage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::ButtonMashDurationMontageSection::get_MontageSection() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SwGame::ButtonMashDurationMontageSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.ButtonMashDurationMontageSection");
    return result;
}
