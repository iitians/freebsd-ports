--- chrome/browser/prefs/browser_prefs.cc.orig	2020-07-07 21:58:13 UTC
+++ chrome/browser/prefs/browser_prefs.cc
@@ -380,7 +380,7 @@
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "chrome/browser/browser_switcher/browser_switcher_prefs.h"
 #endif
 
@@ -1075,7 +1075,7 @@ void RegisterProfilePrefs(user_prefs::PrefRegistrySync
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   browser_switcher::BrowserSwitcherPrefs::RegisterProfilePrefs(registry);
 #endif
 
