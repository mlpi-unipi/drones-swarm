
#ifndef CV_BRIDGE_EXPORT_H
#define CV_BRIDGE_EXPORT_H

#ifdef CV_BRIDGE_STATIC_DEFINE
#  define CV_BRIDGE_EXPORT
#  define CV_BRIDGE_NO_EXPORT
#else
#  ifndef CV_BRIDGE_EXPORT
#    ifdef cv_bridge_EXPORTS
        /* We are building this library */
#      define CV_BRIDGE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define CV_BRIDGE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef CV_BRIDGE_NO_EXPORT
#    define CV_BRIDGE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef CV_BRIDGE_DEPRECATED
#  define CV_BRIDGE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef CV_BRIDGE_DEPRECATED_EXPORT
#  define CV_BRIDGE_DEPRECATED_EXPORT CV_BRIDGE_EXPORT CV_BRIDGE_DEPRECATED
#endif

#ifndef CV_BRIDGE_DEPRECATED_NO_EXPORT
#  define CV_BRIDGE_DEPRECATED_NO_EXPORT CV_BRIDGE_NO_EXPORT CV_BRIDGE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef CV_BRIDGE_NO_DEPRECATED
#    define CV_BRIDGE_NO_DEPRECATED
#  endif
#endif

#endif /* CV_BRIDGE_EXPORT_H */
