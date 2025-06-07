#include "..\FUObjectArray.hpp"
#include "func_StreamingInstall_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Functions_func_StreamingInstall::func_StreamingInstall_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Functions/func_StreamingInstall.func_StreamingInstall_C");
    return result;
}
void _Game_GlobalData_Functions_func_StreamingInstall::func_StreamingInstall_C::AudioIsFullyInstalledForLocale(void* Locale, _Script_CoreUObject::Object* __WorldContext, void*& InstallStatus) {
    return;
}
void _Game_GlobalData_Functions_func_StreamingInstall::func_StreamingInstall_C::GameIsFullyInstalled(_Script_CoreUObject::Object* __WorldContext, bool& Fully_Installed_) {
    return;
}
