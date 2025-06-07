#include "..\FUObjectArray.hpp"
#include "AlwaysLoadedSubLevel_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_Global_AlwaysLoadedSubLevel::AlwaysLoadedSubLevel_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Global/AlwaysLoadedSubLevel.AlwaysLoadedSubLevel_C");
    return result;
}
void* _Game_Levels_Global_AlwaysLoadedSubLevel::AlwaysLoadedSubLevel_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Game_Levels_Global_AlwaysLoadedSubLevel::AlwaysLoadedSubLevel_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_Global_AlwaysLoadedSubLevel::AlwaysLoadedSubLevel_C::ExecuteUbergraph_AlwaysLoadedSubLevel(int32_t EntryPoint) {
    return;
}
