/* Generated by ./xlat/gen.sh from ./xlat/if_dqinfo_valid.in; do not edit. */
#if !(defined(IIF_BGRACE) || (defined(HAVE_DECL_IIF_BGRACE) && HAVE_DECL_IIF_BGRACE))
# define IIF_BGRACE (1 << 0)
#endif
#if !(defined(IIF_IGRACE) || (defined(HAVE_DECL_IIF_IGRACE) && HAVE_DECL_IIF_IGRACE))
# define IIF_IGRACE (1 << 1)
#endif
#if !(defined(IIF_FLAGS) || (defined(HAVE_DECL_IIF_FLAGS) && HAVE_DECL_IIF_FLAGS))
# define IIF_FLAGS (1 << 2)
#endif

#ifdef IN_MPERS

# error static const struct xlat if_dqinfo_valid in mpers mode

#else

static
const struct xlat if_dqinfo_valid[] = {
 XLAT(IIF_BGRACE),
 XLAT(IIF_IGRACE),
 XLAT(IIF_FLAGS),
 XLAT_END
};

#endif /* !IN_MPERS */
