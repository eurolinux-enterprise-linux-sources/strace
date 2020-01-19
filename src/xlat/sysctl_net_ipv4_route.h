/* Generated by ./xlat/gen.sh from ./xlat/sysctl_net_ipv4_route.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat sysctl_net_ipv4_route in mpers mode

#else

static
const struct xlat sysctl_net_ipv4_route[] = {
#if defined(NET_IPV4_ROUTE_FLUSH) || (defined(HAVE_DECL_NET_IPV4_ROUTE_FLUSH) && HAVE_DECL_NET_IPV4_ROUTE_FLUSH)
  XLAT(NET_IPV4_ROUTE_FLUSH),
#endif
#if defined(NET_IPV4_ROUTE_MIN_DELAY) || (defined(HAVE_DECL_NET_IPV4_ROUTE_MIN_DELAY) && HAVE_DECL_NET_IPV4_ROUTE_MIN_DELAY)
  XLAT(NET_IPV4_ROUTE_MIN_DELAY),
#endif
#if defined(NET_IPV4_ROUTE_MAX_DELAY) || (defined(HAVE_DECL_NET_IPV4_ROUTE_MAX_DELAY) && HAVE_DECL_NET_IPV4_ROUTE_MAX_DELAY)
  XLAT(NET_IPV4_ROUTE_MAX_DELAY),
#endif
#if defined(NET_IPV4_ROUTE_GC_THRESH) || (defined(HAVE_DECL_NET_IPV4_ROUTE_GC_THRESH) && HAVE_DECL_NET_IPV4_ROUTE_GC_THRESH)
  XLAT(NET_IPV4_ROUTE_GC_THRESH),
#endif
#if defined(NET_IPV4_ROUTE_MAX_SIZE) || (defined(HAVE_DECL_NET_IPV4_ROUTE_MAX_SIZE) && HAVE_DECL_NET_IPV4_ROUTE_MAX_SIZE)
  XLAT(NET_IPV4_ROUTE_MAX_SIZE),
#endif
#if defined(NET_IPV4_ROUTE_GC_MIN_INTERVAL) || (defined(HAVE_DECL_NET_IPV4_ROUTE_GC_MIN_INTERVAL) && HAVE_DECL_NET_IPV4_ROUTE_GC_MIN_INTERVAL)
  XLAT(NET_IPV4_ROUTE_GC_MIN_INTERVAL),
#endif
#if defined(NET_IPV4_ROUTE_GC_TIMEOUT) || (defined(HAVE_DECL_NET_IPV4_ROUTE_GC_TIMEOUT) && HAVE_DECL_NET_IPV4_ROUTE_GC_TIMEOUT)
  XLAT(NET_IPV4_ROUTE_GC_TIMEOUT),
#endif
#if defined(NET_IPV4_ROUTE_GC_INTERVAL) || (defined(HAVE_DECL_NET_IPV4_ROUTE_GC_INTERVAL) && HAVE_DECL_NET_IPV4_ROUTE_GC_INTERVAL)
  XLAT(NET_IPV4_ROUTE_GC_INTERVAL),
#endif
#if defined(NET_IPV4_ROUTE_REDIRECT_LOAD) || (defined(HAVE_DECL_NET_IPV4_ROUTE_REDIRECT_LOAD) && HAVE_DECL_NET_IPV4_ROUTE_REDIRECT_LOAD)
  XLAT(NET_IPV4_ROUTE_REDIRECT_LOAD),
#endif
#if defined(NET_IPV4_ROUTE_REDIRECT_NUMBER) || (defined(HAVE_DECL_NET_IPV4_ROUTE_REDIRECT_NUMBER) && HAVE_DECL_NET_IPV4_ROUTE_REDIRECT_NUMBER)
  XLAT(NET_IPV4_ROUTE_REDIRECT_NUMBER),
#endif
#if defined(NET_IPV4_ROUTE_REDIRECT_SILENCE) || (defined(HAVE_DECL_NET_IPV4_ROUTE_REDIRECT_SILENCE) && HAVE_DECL_NET_IPV4_ROUTE_REDIRECT_SILENCE)
  XLAT(NET_IPV4_ROUTE_REDIRECT_SILENCE),
#endif
#if defined(NET_IPV4_ROUTE_ERROR_COST) || (defined(HAVE_DECL_NET_IPV4_ROUTE_ERROR_COST) && HAVE_DECL_NET_IPV4_ROUTE_ERROR_COST)
  XLAT(NET_IPV4_ROUTE_ERROR_COST),
#endif
#if defined(NET_IPV4_ROUTE_ERROR_BURST) || (defined(HAVE_DECL_NET_IPV4_ROUTE_ERROR_BURST) && HAVE_DECL_NET_IPV4_ROUTE_ERROR_BURST)
  XLAT(NET_IPV4_ROUTE_ERROR_BURST),
#endif
#if defined(NET_IPV4_ROUTE_GC_ELASTICITY) || (defined(HAVE_DECL_NET_IPV4_ROUTE_GC_ELASTICITY) && HAVE_DECL_NET_IPV4_ROUTE_GC_ELASTICITY)
  XLAT(NET_IPV4_ROUTE_GC_ELASTICITY),
#endif
#if defined(NET_IPV4_ROUTE_MTU_EXPIRES) || (defined(HAVE_DECL_NET_IPV4_ROUTE_MTU_EXPIRES) && HAVE_DECL_NET_IPV4_ROUTE_MTU_EXPIRES)
  XLAT(NET_IPV4_ROUTE_MTU_EXPIRES),
#endif
#if defined(NET_IPV4_ROUTE_MIN_PMTU) || (defined(HAVE_DECL_NET_IPV4_ROUTE_MIN_PMTU) && HAVE_DECL_NET_IPV4_ROUTE_MIN_PMTU)
  XLAT(NET_IPV4_ROUTE_MIN_PMTU),
#endif
#if defined(NET_IPV4_ROUTE_MIN_ADVMSS) || (defined(HAVE_DECL_NET_IPV4_ROUTE_MIN_ADVMSS) && HAVE_DECL_NET_IPV4_ROUTE_MIN_ADVMSS)
  XLAT(NET_IPV4_ROUTE_MIN_ADVMSS),
#endif
#if defined(NET_IPV4_ROUTE_SECRET_INTERVAL) || (defined(HAVE_DECL_NET_IPV4_ROUTE_SECRET_INTERVAL) && HAVE_DECL_NET_IPV4_ROUTE_SECRET_INTERVAL)
  XLAT(NET_IPV4_ROUTE_SECRET_INTERVAL),
#endif
#if defined(NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS) || (defined(HAVE_DECL_NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS) && HAVE_DECL_NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS)
  XLAT(NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
